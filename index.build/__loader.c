
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 42 > 0
static unsigned char *bytecode_data[42];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_termui_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_textwrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_winconsole(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$shell_completion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$termui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansitowin32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$initialise(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$winterm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$app(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$blueprints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$cli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$ctx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$debughelpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$json$provider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$json$tag(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$logging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$scaffold(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$signals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$templating(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flask$wrappers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$encoding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$exc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$serializer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$signer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$timed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_itsdangerous$url_safe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$ext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kiwisolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutgrid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_subplots(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modelo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modelo$Matriz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modelo$coord(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modelo$ecuacion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$_reloader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$datastructures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$debug$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$debug$repr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$debug$tbtools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$formparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$local(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$middleware(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$middleware$shared_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$routing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$routing$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$routing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$routing$map(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$routing$matcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$routing$rules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$sansio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$sansio$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$sansio$multipart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$sansio$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$sansio$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$sansio$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$security(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$serving(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$test(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$user_agent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$wrappers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$wrappers$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$wrappers$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_werkzeug$wsgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\154\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\155\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\165\146\162\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\103\165\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\144\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\160\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FitsImagePlugin", modulecode_PIL$FitsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\151\164\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FitsStubImagePlugin", modulecode_PIL$FitsStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\151\164\163\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\154\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\160\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\164\145\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\142\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\107\162\141\144\151\145\156\164\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\162\151\142\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\110\144\146\65\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\156\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\56\160\171"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\150\157\160\163\56\160\171"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\157\154\157\162\56\160\171"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\115\157\144\145\56\160\171"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\117\160\163\56\160\171"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\120\141\154\145\164\164\145\56\160\171"
#endif
},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\121\164\56\160\171"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\150\157\167\56\160\171"
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\124\153\56\160\171"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\164\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\160\164\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\62\113\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\120\162\145\163\145\164\163\56\160\171"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\143\111\144\141\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\151\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\163\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\120\141\162\163\145\162\56\160\171"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\151\170\141\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\156\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\163\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\171\101\143\143\145\163\163\56\160\171"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\147\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\160\151\144\145\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\165\156\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\147\141\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\145\142\120\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\155\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\126\124\150\165\155\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\142\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\142\151\156\141\162\171\56\160\171"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\165\164\151\154\56\160\171"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\143\162\151\163\164\151\141\156\134\151\166\145\163\164\151\147\141\143\151\157\156\40\144\145\40\157\160\145\162\141\143\151\157\156\145\163\134\115\351\164\157\144\157\163\40\144\145\40\117\160\164\151\155\151\172\141\143\151\363\156\134\151\156\144\145\170\56\160\171"
#endif
},
    {"bdb", NULL, 0, 25563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\142\144\142\56\160\171"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\143\157\162\145\56\160\171"
#endif
},
    {"click", modulecode_click, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"click._compat", modulecode_click$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"click._termui_impl", modulecode_click$_termui_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\164\145\162\155\165\151\137\151\155\160\154\56\160\171"
#endif
},
    {"click._textwrap", modulecode_click$_textwrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\164\145\170\164\167\162\141\160\56\160\171"
#endif
},
    {"click._winconsole", modulecode_click$_winconsole, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\167\151\156\143\157\156\163\157\154\145\56\160\171"
#endif
},
    {"click.core", modulecode_click$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\143\157\162\145\56\160\171"
#endif
},
    {"click.decorators", modulecode_click$decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\144\145\143\157\162\141\164\157\162\163\56\160\171"
#endif
},
    {"click.exceptions", modulecode_click$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"click.formatting", modulecode_click$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"click.globals", modulecode_click$globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"click.parser", modulecode_click$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"click.shell_completion", modulecode_click$shell_completion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\163\150\145\154\154\137\143\157\155\160\154\145\164\151\157\156\56\160\171"
#endif
},
    {"click.termui", modulecode_click$termui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\164\145\162\155\165\151\56\160\171"
#endif
},
    {"click.testing", modulecode_click$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"click.types", modulecode_click$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\164\171\160\145\163\56\160\171"
#endif
},
    {"click.utils", modulecode_click$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\165\164\151\154\163\56\160\171"
#endif
},
    {"colorama", modulecode_colorama, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"colorama.ansi", modulecode_colorama$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\141\156\163\151\56\160\171"
#endif
},
    {"colorama.ansitowin32", modulecode_colorama$ansitowin32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\141\156\163\151\164\157\167\151\156\63\62\56\160\171"
#endif
},
    {"colorama.initialise", modulecode_colorama$initialise, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\151\156\151\164\151\141\154\151\163\145\56\160\171"
#endif
},
    {"colorama.win32", modulecode_colorama$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\167\151\156\63\62\56\160\171"
#endif
},
    {"colorama.winterm", modulecode_colorama$winterm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\167\151\156\164\145\162\155\56\160\171"
#endif
},
    {"cycler", modulecode_cycler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\171\143\154\145\162\56\160\171"
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\145\141\163\164\145\162\56\160\171"
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\151\163\157\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\145\154\141\164\151\166\145\144\145\154\164\141\56\160\171"
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\162\165\154\145\56\160\171"
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\146\141\143\164\157\162\151\145\163\56\160\171"
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\164\172\56\160\171"
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\167\151\156\56\160\171"
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\172\157\156\145\151\156\146\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"email", NULL, 1, 1541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"email._encoded_words", NULL, 2, 5696, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\145\156\143\157\144\145\144\137\167\157\162\144\163\56\160\171"
#endif
},
    {"email._header_value_parser", NULL, 3, 77807, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\150\145\141\144\145\162\137\166\141\154\165\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email._parseaddr", NULL, 4, 12463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\160\141\162\163\145\141\144\144\162\56\160\171"
#endif
},
    {"email._policybase", NULL, 5, 14763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\160\157\154\151\143\171\142\141\163\145\56\160\171"
#endif
},
    {"email.base64mime", NULL, 6, 3221, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\142\141\163\145\66\64\155\151\155\145\56\160\171"
#endif
},
    {"email.charset", NULL, 7, 11556, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\143\150\141\162\163\145\164\56\160\171"
#endif
},
    {"email.contentmanager", NULL, 8, 7370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\143\157\156\164\145\156\164\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"email.encoders", NULL, 9, 1608, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\145\156\143\157\144\145\162\163\56\160\171"
#endif
},
    {"email.errors", NULL, 10, 5683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"email.feedparser", NULL, 11, 10567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\146\145\145\144\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.generator", NULL, 12, 12582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\147\145\156\145\162\141\164\157\162\56\160\171"
#endif
},
    {"email.header", NULL, 13, 16443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\56\160\171"
#endif
},
    {"email.headerregistry", NULL, 14, 21886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\162\145\147\151\163\164\162\171\56\160\171"
#endif
},
    {"email.iterators", NULL, 15, 1949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\151\164\145\162\141\164\157\162\163\56\160\171"
#endif
},
    {"email.message", NULL, 16, 37789, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\155\145\163\163\141\147\145\56\160\171"
#endif
},
    {"email.parser", NULL, 17, 5654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.policy", NULL, 18, 9634, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\160\157\154\151\143\171\56\160\171"
#endif
},
    {"email.quoprimime", NULL, 19, 7604, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\161\165\157\160\162\151\155\151\155\145\56\160\171"
#endif
},
    {"email.utils", NULL, 20, 9667, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\165\164\151\154\163\56\160\171"
#endif
},
    {"flask", modulecode_flask, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"flask.app", modulecode_flask$app, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\141\160\160\56\160\171"
#endif
},
    {"flask.blueprints", modulecode_flask$blueprints, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\142\154\165\145\160\162\151\156\164\163\56\160\171"
#endif
},
    {"flask.cli", modulecode_flask$cli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\143\154\151\56\160\171"
#endif
},
    {"flask.config", modulecode_flask$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"flask.ctx", modulecode_flask$ctx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\143\164\170\56\160\171"
#endif
},
    {"flask.debughelpers", modulecode_flask$debughelpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\144\145\142\165\147\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"flask.globals", modulecode_flask$globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"flask.helpers", modulecode_flask$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"flask.json", modulecode_flask$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\152\163\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"flask.json.provider", modulecode_flask$json$provider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\152\163\157\156\134\160\162\157\166\151\144\145\162\56\160\171"
#endif
},
    {"flask.json.tag", modulecode_flask$json$tag, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\152\163\157\156\134\164\141\147\56\160\171"
#endif
},
    {"flask.logging", modulecode_flask$logging, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\154\157\147\147\151\156\147\56\160\171"
#endif
},
    {"flask.scaffold", modulecode_flask$scaffold, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\163\143\141\146\146\157\154\144\56\160\171"
#endif
},
    {"flask.sessions", modulecode_flask$sessions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\163\145\163\163\151\157\156\163\56\160\171"
#endif
},
    {"flask.signals", modulecode_flask$signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\163\151\147\156\141\154\163\56\160\171"
#endif
},
    {"flask.templating", modulecode_flask$templating, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\164\145\155\160\154\141\164\151\156\147\56\160\171"
#endif
},
    {"flask.testing", modulecode_flask$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"flask.typing", modulecode_flask$typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\164\171\160\151\156\147\56\160\171"
#endif
},
    {"flask.wrappers", modulecode_flask$wrappers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\141\163\153\134\167\162\141\160\160\145\162\163\56\160\171"
#endif
},
    {"http", NULL, 21, 6397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"http.client", NULL, 22, 35104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {"http.cookiejar", NULL, 23, 53449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\143\157\157\153\151\145\152\141\162\56\160\171"
#endif
},
    {"http.server", NULL, 24, 34567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\163\145\162\166\145\162\56\160\171"
#endif
},
    {"itsdangerous", modulecode_itsdangerous, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"itsdangerous._json", modulecode_itsdangerous$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\137\152\163\157\156\56\160\171"
#endif
},
    {"itsdangerous.encoding", modulecode_itsdangerous$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\145\156\143\157\144\151\156\147\56\160\171"
#endif
},
    {"itsdangerous.exc", modulecode_itsdangerous$exc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\145\170\143\56\160\171"
#endif
},
    {"itsdangerous.serializer", modulecode_itsdangerous$serializer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\163\145\162\151\141\154\151\172\145\162\56\160\171"
#endif
},
    {"itsdangerous.signer", modulecode_itsdangerous$signer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\163\151\147\156\145\162\56\160\171"
#endif
},
    {"itsdangerous.timed", modulecode_itsdangerous$timed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\164\151\155\145\144\56\160\171"
#endif
},
    {"itsdangerous.url_safe", modulecode_itsdangerous$url_safe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\164\163\144\141\156\147\145\162\157\165\163\134\165\162\154\137\163\141\146\145\56\160\171"
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\151\144\145\156\164\151\146\151\145\162\56\160\171"
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\141\163\171\156\143\137\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\142\143\143\141\143\150\145\56\160\171"
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\155\160\151\154\145\162\56\160\171"
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\142\165\147\56\160\171"
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\146\141\165\154\164\163\56\160\171"
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\156\166\151\162\157\156\155\145\156\164\56\160\171"
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"jinja2.ext", modulecode_jinja2$ext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\170\164\56\160\171"
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\151\144\164\162\141\143\153\151\156\147\56\160\171"
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\145\170\145\162\56\160\171"
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\157\141\144\145\162\163\56\160\171"
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\156\157\144\145\163\56\160\171"
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\157\160\164\151\155\151\172\145\162\56\160\171"
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\162\165\156\164\151\155\145\56\160\171"
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\164\145\163\164\163\56\160\171"
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\166\151\163\151\164\157\162\56\160\171"
#endif
},
    {"kiwisolver", modulecode_kiwisolver, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\153\151\167\151\163\157\154\166\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\156\141\164\151\166\145\56\160\171"
#endif
},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib._api", modulecode_matplotlib$_api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\141\160\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib._api.deprecation", modulecode_matplotlib$_api$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\141\160\151\134\144\145\160\162\145\143\141\164\151\157\156\56\160\171"
#endif
},
    {"matplotlib._blocking_input", modulecode_matplotlib$_blocking_input, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\142\154\157\143\153\151\156\147\137\151\156\160\165\164\56\160\171"
#endif
},
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\155\56\160\171"
#endif
},
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\155\137\154\151\163\164\145\144\56\160\171"
#endif
},
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\157\154\157\162\137\144\141\164\141\56\160\171"
#endif
},
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\143\157\156\163\164\162\141\151\156\145\144\137\154\141\171\157\165\164\56\160\171"
#endif
},
    {"matplotlib._enums", modulecode_matplotlib$_enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\145\156\165\155\163\56\160\171"
#endif
},
    {"matplotlib._layoutgrid", modulecode_matplotlib$_layoutgrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\154\141\171\157\165\164\147\162\151\144\56\160\171"
#endif
},
    {"matplotlib._mathtext", modulecode_matplotlib$_mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\155\141\164\150\164\145\170\164\56\160\171"
#endif
},
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\155\141\164\150\164\145\170\164\137\144\141\164\141\56\160\171"
#endif
},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\160\171\154\141\142\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"matplotlib._text_helpers", modulecode_matplotlib$_text_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\164\145\170\164\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"matplotlib.afm", modulecode_matplotlib$afm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\146\155\56\160\171"
#endif
},
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\162\164\151\163\164\56\160\171"
#endif
},
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\141\170\145\163\56\160\171"
#endif
},
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\142\141\163\145\56\160\171"
#endif
},
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\163\145\143\157\156\144\141\162\171\137\141\170\145\163\56\160\171"
#endif
},
    {"matplotlib.axes._subplots", modulecode_matplotlib$axes$_subplots, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\145\163\134\137\163\165\142\160\154\157\164\163\56\160\171"
#endif
},
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\141\170\151\163\56\160\171"
#endif
},
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\137\142\141\163\145\163\56\160\171"
#endif
},
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\137\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\137\164\157\157\154\163\56\160\171"
#endif
},
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\137\142\141\143\153\145\156\144\137\164\153\56\160\171"
#endif
},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\142\141\143\153\145\156\144\137\141\147\147\56\160\171"
#endif
},
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\141\143\153\145\156\144\163\134\142\141\143\153\145\156\144\137\164\153\141\147\147\56\160\171"
#endif
},
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\142\145\172\151\145\162\56\160\171"
#endif
},
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\141\164\145\147\157\162\171\56\160\171"
#endif
},
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\142\157\157\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\155\56\160\171"
#endif
},
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\154\154\145\143\164\151\157\156\163\56\160\171"
#endif
},
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\154\157\162\142\141\162\56\160\171"
#endif
},
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\156\164\141\151\156\145\162\56\160\171"
#endif
},
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\143\157\156\164\157\165\162\56\160\171"
#endif
},
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\144\141\164\145\163\56\160\171"
#endif
},
    {"matplotlib.docstring", modulecode_matplotlib$docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\144\157\143\163\164\162\151\156\147\56\160\171"
#endif
},
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\144\166\151\162\145\141\144\56\160\171"
#endif
},
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\146\151\147\165\162\145\56\160\171"
#endif
},
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\146\157\156\164\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"matplotlib.fontconfig_pattern", modulecode_matplotlib$fontconfig_pattern, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\146\157\156\164\143\157\156\146\151\147\137\160\141\164\164\145\162\156\56\160\171"
#endif
},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\147\162\151\144\163\160\145\143\56\160\171"
#endif
},
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\150\141\164\143\150\56\160\171"
#endif
},
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\151\155\141\147\145\56\160\171"
#endif
},
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\145\147\145\156\144\137\150\141\156\144\154\145\162\56\160\171"
#endif
},
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\154\151\156\145\163\56\160\171"
#endif
},
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\155\141\164\150\164\145\170\164\56\160\171"
#endif
},
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\155\154\141\142\56\160\171"
#endif
},
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\157\146\146\163\145\164\142\157\170\56\160\171"
#endif
},
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\141\164\143\150\145\163\56\160\171"
#endif
},
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\141\164\150\56\160\171"
#endif
},
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\141\164\150\145\146\146\145\143\164\163\56\160\171"
#endif
},
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\162\157\152\145\143\164\151\157\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\162\157\152\145\143\164\151\157\156\163\134\147\145\157\56\160\171"
#endif
},
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\162\157\152\145\143\164\151\157\156\163\134\160\157\154\141\162\56\160\171"
#endif
},
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\160\171\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\161\165\151\166\145\162\56\160\171"
#endif
},
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\162\143\163\145\164\165\160\56\160\171"
#endif
},
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\143\141\154\145\56\160\171"
#endif
},
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\160\151\156\145\163\56\160\171"
#endif
},
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\141\143\153\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\162\145\141\155\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\134\143\157\162\145\56\160\171"
#endif
},
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\141\142\154\145\56\160\171"
#endif
},
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\145\170\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\145\170\164\56\160\171"
#endif
},
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\145\170\164\160\141\164\150\56\160\171"
#endif
},
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\151\143\153\145\162\56\160\171"
#endif
},
    {"matplotlib.tight_bbox", modulecode_matplotlib$tight_bbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\151\147\150\164\137\142\142\157\170\56\160\171"
#endif
},
    {"matplotlib.tight_layout", modulecode_matplotlib$tight_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\151\147\150\164\137\154\141\171\157\165\164\56\160\171"
#endif
},
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"matplotlib.tri.triangulation", modulecode_matplotlib$tri$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\141\156\147\165\154\141\164\151\157\156\56\160\171"
#endif
},
    {"matplotlib.tri.tricontour", modulecode_matplotlib$tri$tricontour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\143\157\156\164\157\165\162\56\160\171"
#endif
},
    {"matplotlib.tri.trifinder", modulecode_matplotlib$tri$trifinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\146\151\156\144\145\162\56\160\171"
#endif
},
    {"matplotlib.tri.triinterpolate", modulecode_matplotlib$tri$triinterpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\151\156\164\145\162\160\157\154\141\164\145\56\160\171"
#endif
},
    {"matplotlib.tri.tripcolor", modulecode_matplotlib$tri$tripcolor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\160\143\157\154\157\162\56\160\171"
#endif
},
    {"matplotlib.tri.triplot", modulecode_matplotlib$tri$triplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\160\154\157\164\56\160\171"
#endif
},
    {"matplotlib.tri.trirefine", modulecode_matplotlib$tri$trirefine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\162\145\146\151\156\145\56\160\171"
#endif
},
    {"matplotlib.tri.tritools", modulecode_matplotlib$tri$tritools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\164\162\151\134\164\162\151\164\157\157\154\163\56\160\171"
#endif
},
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\165\156\151\164\163\56\160\171"
#endif
},
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\164\160\154\157\164\154\151\142\134\167\151\144\147\145\164\163\56\160\171"
#endif
},
    {"modelo", modulecode_modelo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\143\162\151\163\164\151\141\156\134\151\166\145\163\164\151\147\141\143\151\157\156\40\144\145\40\157\160\145\162\141\143\151\157\156\145\163\134\115\351\164\157\144\157\163\40\144\145\40\117\160\164\151\155\151\172\141\143\151\363\156\134\155\157\144\145\154\157"
#endif
},
    {"modelo.Matriz", modulecode_modelo$Matriz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\143\162\151\163\164\151\141\156\134\151\166\145\163\164\151\147\141\143\151\157\156\40\144\145\40\157\160\145\162\141\143\151\157\156\145\163\134\115\351\164\157\144\157\163\40\144\145\40\117\160\164\151\155\151\172\141\143\151\363\156\134\155\157\144\145\154\157\134\115\141\164\162\151\172\56\160\171"
#endif
},
    {"modelo.coord", modulecode_modelo$coord, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\143\162\151\163\164\151\141\156\134\151\166\145\163\164\151\147\141\143\151\157\156\40\144\145\40\157\160\145\162\141\143\151\157\156\145\163\134\115\351\164\157\144\157\163\40\144\145\40\117\160\164\151\155\151\172\141\143\151\363\156\134\155\157\144\145\154\157\134\143\157\157\162\144\56\160\171"
#endif
},
    {"modelo.ecuacion", modulecode_modelo$ecuacion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\143\162\151\163\164\151\141\156\134\151\166\145\163\164\151\147\141\143\151\157\156\40\144\145\40\157\160\145\162\141\143\151\157\156\145\163\134\115\351\164\157\144\157\163\40\144\145\40\117\160\164\151\155\151\172\141\143\151\363\156\134\155\157\144\145\154\157\134\145\143\165\141\143\151\157\156\56\160\171"
#endif
},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163"
#endif
},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\141\162\164\63\144\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\141\170\145\163\63\144\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\141\170\151\163\63\144\56\160\171"
#endif
},
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\160\154\137\164\157\157\154\153\151\164\163\134\155\160\154\157\164\63\144\134\160\162\157\152\63\144\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.testing", NULL, 25, 1037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"packaging", NULL, 26, 413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"packaging.__about__", NULL, 27, 557, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\137\141\142\157\165\164\137\137\56\160\171"
#endif
},
    {"packaging._structures", NULL, 28, 2672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"packaging.version", NULL, 29, 12892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pdb", NULL, 30, 47515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\160\144\142\56\160\171"
#endif
},
    {"pydoc", NULL, 31, 84654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\160\171\144\157\143\56\160\171"
#endif
},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\144\151\141\147\162\141\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\162\145\163\165\154\164\163\56\160\171"
#endif
},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\165\156\151\143\157\144\145\56\160\171"
#endif
},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\141\162\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"runpy", NULL, 32, 8516, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\162\165\156\160\171\56\160\171"
#endif
},
    {"site", NULL, 33, 17361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\151\170\56\160\171"
#endif
},
    {"tkinter", NULL, 34, 169283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"tkinter.commondialog", NULL, 35, 1329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\143\157\155\155\157\156\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.constants", NULL, 36, 1638, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"tkinter.dialog", NULL, 37, 1491, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.filedialog", NULL, 38, 12434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\146\151\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.font", NULL, 39, 6596, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\146\157\156\164\56\160\171"
#endif
},
    {"tkinter.messagebox", NULL, 40, 2907, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\155\145\163\163\141\147\145\142\157\170\56\160\171"
#endif
},
    {"tkinter.simpledialog", NULL, 41, 10912, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\163\151\155\160\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"werkzeug", modulecode_werkzeug, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"werkzeug._internal", modulecode_werkzeug$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"werkzeug._reloader", modulecode_werkzeug$_reloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\137\162\145\154\157\141\144\145\162\56\160\171"
#endif
},
    {"werkzeug.datastructures", modulecode_werkzeug$datastructures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\144\141\164\141\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"werkzeug.debug", modulecode_werkzeug$debug, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\144\145\142\165\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"werkzeug.debug.console", modulecode_werkzeug$debug$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\144\145\142\165\147\134\143\157\156\163\157\154\145\56\160\171"
#endif
},
    {"werkzeug.debug.repr", modulecode_werkzeug$debug$repr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\144\145\142\165\147\134\162\145\160\162\56\160\171"
#endif
},
    {"werkzeug.debug.tbtools", modulecode_werkzeug$debug$tbtools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\144\145\142\165\147\134\164\142\164\157\157\154\163\56\160\171"
#endif
},
    {"werkzeug.exceptions", modulecode_werkzeug$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"werkzeug.formparser", modulecode_werkzeug$formparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\146\157\162\155\160\141\162\163\145\162\56\160\171"
#endif
},
    {"werkzeug.http", modulecode_werkzeug$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\150\164\164\160\56\160\171"
#endif
},
    {"werkzeug.local", modulecode_werkzeug$local, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\154\157\143\141\154\56\160\171"
#endif
},
    {"werkzeug.middleware", modulecode_werkzeug$middleware, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\155\151\144\144\154\145\167\141\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"werkzeug.middleware.shared_data", modulecode_werkzeug$middleware$shared_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\155\151\144\144\154\145\167\141\162\145\134\163\150\141\162\145\144\137\144\141\164\141\56\160\171"
#endif
},
    {"werkzeug.routing", modulecode_werkzeug$routing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\162\157\165\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"werkzeug.routing.converters", modulecode_werkzeug$routing$converters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\162\157\165\164\151\156\147\134\143\157\156\166\145\162\164\145\162\163\56\160\171"
#endif
},
    {"werkzeug.routing.exceptions", modulecode_werkzeug$routing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\162\157\165\164\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"werkzeug.routing.map", modulecode_werkzeug$routing$map, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\162\157\165\164\151\156\147\134\155\141\160\56\160\171"
#endif
},
    {"werkzeug.routing.matcher", modulecode_werkzeug$routing$matcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\162\157\165\164\151\156\147\134\155\141\164\143\150\145\162\56\160\171"
#endif
},
    {"werkzeug.routing.rules", modulecode_werkzeug$routing$rules, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\162\157\165\164\151\156\147\134\162\165\154\145\163\56\160\171"
#endif
},
    {"werkzeug.sansio", modulecode_werkzeug$sansio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\141\156\163\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"werkzeug.sansio.http", modulecode_werkzeug$sansio$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\141\156\163\151\157\134\150\164\164\160\56\160\171"
#endif
},
    {"werkzeug.sansio.multipart", modulecode_werkzeug$sansio$multipart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\141\156\163\151\157\134\155\165\154\164\151\160\141\162\164\56\160\171"
#endif
},
    {"werkzeug.sansio.request", modulecode_werkzeug$sansio$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\141\156\163\151\157\134\162\145\161\165\145\163\164\56\160\171"
#endif
},
    {"werkzeug.sansio.response", modulecode_werkzeug$sansio$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\141\156\163\151\157\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"werkzeug.sansio.utils", modulecode_werkzeug$sansio$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\141\156\163\151\157\134\165\164\151\154\163\56\160\171"
#endif
},
    {"werkzeug.security", modulecode_werkzeug$security, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\145\143\165\162\151\164\171\56\160\171"
#endif
},
    {"werkzeug.serving", modulecode_werkzeug$serving, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\163\145\162\166\151\156\147\56\160\171"
#endif
},
    {"werkzeug.test", modulecode_werkzeug$test, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\164\145\163\164\56\160\171"
#endif
},
    {"werkzeug.urls", modulecode_werkzeug$urls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\165\162\154\163\56\160\171"
#endif
},
    {"werkzeug.user_agent", modulecode_werkzeug$user_agent, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\165\163\145\162\137\141\147\145\156\164\56\160\171"
#endif
},
    {"werkzeug.utils", modulecode_werkzeug$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\165\164\151\154\163\56\160\171"
#endif
},
    {"werkzeug.wrappers", modulecode_werkzeug$wrappers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\167\162\141\160\160\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"werkzeug.wrappers.request", modulecode_werkzeug$wrappers$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\167\162\141\160\160\145\162\163\134\162\145\161\165\145\163\164\56\160\171"
#endif
},
    {"werkzeug.wrappers.response", modulecode_werkzeug$wrappers$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\167\162\141\160\160\145\162\163\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"werkzeug.wsgi", modulecode_werkzeug$wsgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\146\141\155\151\154\134\101\160\160\104\141\164\141\134\122\157\141\155\151\156\147\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\162\153\172\145\165\147\134\167\163\147\151\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

