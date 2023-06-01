const loadingScreen = document.querySelector('loading-screen');


function pageTransitionIn() {
  return gsap
    .to(loadingScreen, { duration: .5, scaleX: 1, transformOrigin: 'left right' })
}


function pageTransitionOut(container) {
  // GSAP methods can be chained and return directly a promise
  return gsap
    .timeline({ delay: .5 }) // More readable to put it here
    .add('start') // Use a label to sync screen and content animation
    .to(loadingScreen, {
      duration: 0.4,
      scaleX: 0,
      skewY: 0,
      stagger: 0.2,
      transformOrigin: 'top right',
      ease: 'power1.out'
    }, 'start')
    .call(contentAnimation, [container], 'start')
}

function titleAnimation(container) {
  // Query from container
  //$(container.querySelector('.green-heading-bg')).addClass('show')
  // GSAP methods can be chained and return directly a promise
  return gsap
    .timeline({ delay: .5 })
    .from(container.querySelector('.text-animated'), {
      duration: .8,
      translateY: 4,
      opacity: 0,
      stagger: 0.4
    })
    .from(mainNavigation, { duration: .8, translateY: -10, opacity: 0 })
}

function contentAnimation(container) {
  gsap.from(container.querySelector('.text-animated'),{
    duration: 1.8,
    translateY: -30,
    opacity: 0,
  })
  gsap.from(container.querySelector('.text-animated-2'),{
    duration: 1.5,
    translateX: -40,
    opacity: 0,
  })
  gsap.from(container.querySelector('.text-animated-3'),{
    duration: 1.5,
    translateX: -40,
    opacity: 0,
  })
  gsap.from(container.querySelector('.text-animated-4'),{
    duration: 1.5,
    translateX: -40,
    opacity: 0,
  })
  gsap.from(container.querySelector('.input-animated-1'),{
    duration: 2,
    translateX: -30,
    opacity: 0,
  })
  gsap.from(container.querySelector('.input-animated-2'),{
    duration: 2,
    translateX: -30,
    opacity: 0,
  })
  gsap.from(container.querySelector('.input-animated-3'),{
    duration: 2,
    translateX: -30,
    opacity: 0,
  })

  gsap.from(container.querySelector('.button-animated'),{
    duration: 2,
    translateX: 60,
  })
  
  gsap.from(container.querySelector('.card-animated-1'),{
    duration: 3,
    opacity: 0
  })
  gsap.from(container.querySelector('.card-animated-2'),{
    duration: 3,
    opacity: 0,
  })
  gsap.to(container.querySelector('.card-animated-1'),{
    duration: 2,
    translateX: -90,
    delay: 2.1
  })
  gsap.to(container.querySelector('.card-animated-2'),{
    duration: 2,
    translateX: 90,
    delay: 2.1
  })
  gsap.to(container.querySelector('.card-animated-1'),{
    duration: 2,
    translateY: 100,
    delay: 2.1
  })
  
  
  gsap.to(container.querySelector('.card-animated-2'),{
    duration: 2,
    translateY: -100,
    delay: 2.1
  })
  
  gsap.to(container.querySelector('.titulo-animated'),{
    duration: 4,
    translateX: 900,
    delay: 2.1
  })

  gsap.from(container.querySelector('.main-animated'),{
    duration: 3,
    translateY: -30,
    opacity: 0
  })

  gsap.from(container.querySelector('.input_data-1'),{
    duration: 3,
    translateX: 50,
    opacity: 0
  })
  gsap.from(container.querySelector('.input_data-2'),{
    duration: 3,
    translateX: 50,
    opacity: 0
  })
  gsap.from(container.querySelector('.input_data-3'),{
    duration: 3,
    translateX: -50,
    opacity: 0
  })
  gsap.from(container.querySelector('.input_data-4'),{
    duration: 3,
    translateX: 50,
    opacity: 0
  })
  
  gsap.from(container.querySelector('.tr-animated'),{
    duration: 3,
    translateX: -50,
    opacity: 0
  })

  gsap.from(container.querySelector('.tr-animated-2'),{
    duration: 3.5,
    translateX: -50,
    opacity: 0
  })
  gsap.from(container.querySelector('.img-grafica-animated'),{
    duration: 3,
    translateX: 50,
    opacity: 0
  })
  gsap.from(container.querySelector('.tabla-animated'),{
    duration: 3,
    translateX: 50,
    opacity: 0
  })
  
  gsap.from(container.querySelector('.funcion-animated-1'),{
    duration: 2.5,
    translateX: 50,
    opacity: 0
  })
  gsap.from(container.querySelector('.funcion-animated-2'),{
    duration: 2.5,
    translateX: -50,
    opacity: 0,
    delay: 1.7
  })
  gsap.from(container.querySelector('.funcion-animated-3'),{
    duration: 2.5,
    translateX: -50,
    opacity: 0,
    delay: 1.7

  })
  gsap.from(container.querySelector('.funcion-animated-titulo-1'),{
    duration: 2.5,
    translateY: 50,
    opacity: 0
  })
  gsap.from(container.querySelector('.funcion-animated-titulo-2'),{
    duration: 2.5,
    translateY: 50,
    opacity: 0,
    delay: 1.5
  })
  
  gsap.from(container.querySelector('.funcion-animated-titulo-3'),{
    duration: 2.5,
    translateY: 50,
    opacity: 0,
    delay: 1.5
  })
}

barba.init({
  transitions: [{
    async leave(data) {

      await pageTransitionIn()
      data.current.container.remove()
    },

    async enter(data) {
      await pageTransitionOut(data.next.container)
    },
    async once(data) {
      await contentAnimation(data.next.container)
    }
  }]
});

