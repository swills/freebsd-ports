# Created by: lightside <lightside@gmx.com>
# $FreeBSD$

PORTNAME=	pioneer
DISTVERSION=	0.0.${GH_TAGNAME}
CATEGORIES=	games

MAINTAINER=	lightside@gmx.com
COMMENT=	Space adventure game set in the Milky Way galaxy

LICENSE=	APACHE20 GPLv3 MIT ZLIB CC-BY-SA-3.0 DejaVu GLEW IUP SIL
LICENSE_COMB=	multi
LICENSE_NAME_DejaVu=	Bitstream Vera and Arev fonts license
LICENSE_NAME_GLEW=	The OpenGL Extension Wrangler Library license
LICENSE_NAME_IUP=	Galaxy colour image use policy
LICENSE_NAME_SIL=	SIL open font license version 1.1
LICENSE_FILE_APACHE20=	${WRKSRC}/licenses/Apache-2.0.txt
LICENSE_FILE_CC-BY-SA-3.0=	${WRKSRC}/licenses/CC-BY-SA-3.0.txt
LICENSE_FILE_DejaVu=	${WRKSRC}/licenses/DejaVu-license.txt
LICENSE_FILE_GLEW=	${WRKSRC}/licenses/GLEW.txt
LICENSE_FILE_GPLv3=	${WRKSRC}/licenses/GPL-3.txt
LICENSE_FILE_IUP=	${WRKSRC}/licenses/Image\ Use\ Policy\ -\ NASA\ Spitzer\ Space\ Telescope.html
LICENSE_FILE_SIL=	${WRKSRC}/licenses/SIL-1.1.txt
LICENSE_PERMS_DejaVu=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept
LICENSE_PERMS_GLEW=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept
LICENSE_PERMS_IUP=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept
LICENSE_PERMS_SIL=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${LOCALBASE}/include/GL/glu.h:graphics/libGLU
LIB_DEPENDS=	libsigc-2.0.so:devel/libsigc++20 \
		libfreetype.so:print/freetype2 \
		libvorbisfile.so:audio/libvorbis \
		libpng.so:graphics/png \
		libassimp.so:multimedia/assimp

USES=		cmake compiler:c++11-lib gl localbase:ldflags pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	pioneerspacesim
GH_TAGNAME=	20190203
USE_GL=		gl
USE_SDL=	image2 sdl2

CMAKE_ARGS=	-DPIONEER_DATA_DIR:PATH="${DATADIR}/data"
EXTRACT_AFTER_ARGS=	--no-same-owner --no-same-permissions --exclude .gitignore
INSTALLS_ICONS=	yes

PORTDATA=	data
PORTDOCS=	AUTHORS.txt Changelog.txt Modelviewer.txt Quickstart.txt README.md

SUB_FILES=	pkg-message

OPTIONS_DEFINE=		DOCS NOGPUJOBS OPTMODELS PROFILER
OPTIONS_DEFAULT=	OPTMODELS
DOCS_SUB_LIST=		QUICKSTART_PATH="${DOCSDIR}"
DOCS_SUB_LIST_OFF=	QUICKSTART_PATH="https://raw.githubusercontent.com/${GH_ACCOUNT}/${GH_PROJECT}/${GH_TAGNAME}"
NOGPUJOBS_DESC=		Disable EnableGPUJobs for config.ini by default
OPTMODELS_DESC=		Build/install optimized models (*.sgm files)
PROFILER_DESC=		Build with internal profiler
PROFILER_CXXFLAGS=	-DPIONEER_PROFILER

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == gcc
# Unhide std::to_string() for GCC (ports/193528)
CXXFLAGS+=	-D_GLIBCXX_USE_C99
.endif

post-patch: .SILENT
	${REINPLACE_CMD} -e '/^target_link_libraries(/,/)$$/d' \
		${WRKSRC}/contrib/imgui/CMakeLists.txt
	${REINPLACE_CMD} -e '/^include(FindGit/d ; \
		/TIMESTAMP/s|.*|set(PROJECT_VERSION "${GH_TAGNAME}")| ; \
		s|$${OPENGL_LIBRARIES}|OpenGL::GL|' \
		${WRKSRC}/CMakeLists.txt

post-patch-NOGPUJOBS-on: .SILENT
# Revert 41272a856d9072404efbfdb10f0e3c9e4f96bb4d commit, in case of
# GL_OUT_OF_MEMORY OpenGL error, when turning to gas giant planet
	${REINPLACE_CMD} -e '/EnableGPUJobs/s|1|0|' \
		 ${WRKSRC}/src/GameConfig.cpp

post-patch-OPTMODELS-off: .SILENT
	${REINPLACE_CMD} -i '.optmodels' -e '/modelcompiler POST_BUILD$$/,/)$$/d' \
		${WRKSRC}/CMakeLists.txt

post-patch-PROFILER-off: .SILENT
	${REINPLACE_CMD} -i '.profiler' -e '/contrib\/profiler/d ; /profiler$$/d' \
		${WRKSRC}/CMakeLists.txt

post-patch-PROFILER-on: .SILENT
	${REINPLACE_CMD} -i '.profiler' -e '\
		/^target_link_libraries(savegamedump/s|LINK_PRIVATE |&profiler |' \
		${WRKSRC}/CMakeLists.txt

post-install:
.for f in modelcompiler savegamedump
	${MV} ${STAGEDIR}${PREFIX}/bin/${f} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}-${f}
.endfor

post-install-DOCS-on:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "${PORTDOCS}" ${STAGEDIR}${DOCSDIR})

.include <bsd.port.post.mk>
