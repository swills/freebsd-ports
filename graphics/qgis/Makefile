# Created by: Laurent Courty
# $FreeBSD$

PORTNAME=	qgis
DISTVERSIONPREFIX=	final-
DISTVERSION=	3_4_2
CATEGORIES=	graphics geography

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	Geographical Information System (GIS) data viewer

LICENSE=	GPLv2

DEPRECATED=		Qt4 has been EOL since december 2015
EXPIRATION_DATE=	2019-03-15

BUILD_DEPENDS=	gpsbabel>=1.5.3:astro/gpsbabel \
		txt2tags:textproc/txt2tags
LIB_DEPENDS=	libexpat.so:textproc/expat2 \
		libfcgi.so:www/fcgi \
		libgdal.so:graphics/gdal \
		libgeos.so:graphics/geos \
		libgsl.so:math/gsl \
		libhdf5.so:science/hdf5 \
		libnetcdf.so:science/netcdf \
		libproj.so:graphics/proj \
		libqca-qt5.so:devel/qca@qt5 \
		libqjson-qt5.so:devel/qjson@qt5 \
		libqscintilla2_qt5.so:devel/qscintilla2-qt5 \
		libqt5keychain.so:security/qtkeychain@qt5 \
		libqwt6.so:x11-toolkits/qwt6@qt5 \
		libspatialindex.so:devel/spatialindex \
		libspatialite.so:databases/spatialite \
		libxerces-c.so:textproc/xerces-c3 \
		libzip.so:archivers/libzip

USES=		bison cmake compiler:features cpe desktop-file-utils \
		fortran gmake pyqt:5 python:3.6+ qt:5 sqlite:3
USE_QT=		core designer doc gui linguist_build network \
		qmake_build script sql svg testlib uitools webengine webkit xml
USE_PYQT=	core gui network qml qscintilla2 sip sql svg xml webkit_run
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_PROJECT=	${PORTNAME:tu}

ICON_SIZES=	8 16 22 24 32 36 42 48 64 72 80 96 128 192 256 512

OPTIONS_DEFINE=		PYTHON POSTGIS GRASS SERVER
OPTIONS_GROUP=		DEVELOPER
OPTIONS_GROUP_DEVELOPER=	CUSTOMWIDGETS ASTYLE TESTS DEBUG
OPTIONS_DEFAULT=	PYTHON POSTGIS
NO_OPTIONS_SORT=	yes
OPTIONS_SUB=		yes
ASTYLE_DESC=		Enable AStyle for QGis
CUSTOMWIDGETS_DESC=	Enable QT5/QGis Custom Widgets
DEBUG_DESC=		Write Debugging Output to Console
SERVER_DESC=		Enable QGIS server
TESTS_DESC=		Run the test suite after build process

CMAKE_ARGS+=	-DPYUIC_PROGRAM:STRING="${LOCALBASE}/bin/pyuic5"
CMAKE_ARGS+=	-DQWT_INCLUDE_DIR:PATH="${LOCALBASE}/include/qt5/qwt6/"
CMAKE_ARGS+=	-DQWT_LIBRARY:FILEPATH="${LOCALBASE}/lib/qt5/libqwt6.so"
CMAKE_ARGS+=	-DQSCI_SIP_DIR:PATH=${LOCALBASE}/share/PyQt5/3.6/sip/Qsci
CMAKE_ARGS+=	-DSIP_DEFAULT_SIP_DIR:FILEPATH=${LOCALBASE}/share/PyQt5/3.6/sip/
CMAKE_ARGS+=	-DWITH_GLOBE:BOOL=FALSE
CMAKE_ARGS+=	-DWITH_QWTPOLAR=OFF
CMAKE_ARGS+=	-DWITH_ORACLE:BOOL=FALSE

.if !defined(MAINTAINER_MODE)
CMAKE_ARGS+=	-Wno-dev
CMAKE_ARGS+=	-DSUPPRESS_QT_WARNINGS=OFF
.endif

ASTYLE_RUN_DEPENDS=	astyle:devel/astyle
ASTYLE_CMAKE_ON=	-DWITH_ASTYLE:BOOL=TRUE
ASTYLE_CMAKE_OFF=	-DWITH_ASTYLE:BOOL=FALSE

CUSTOMWIDGETS_CMAKE_ON=	-DWITH_CUSTOM_WIDGETS:BOOL=TRUE
CUSTOMWIDGETS_CMAKE_OFF=	-DWITH_CUSTOM_WIDGETS:BOOL=FALSE

DEBUG_CMAKE_ON=		-DCMAKE_BUILD_TYPE=Debug
DEBUG_CMAKE_OFF=	-DCMAKE_BUILD_TYPE=Release

GRASS_BUILD_DEPENDS=	grass74:databases/grass7
GRASS_RUN_DEPENDS=	grass74:databases/grass7
GRASS_CMAKE_ON=		-DWITH_GRASS7:BOOL=TRUE -DGRASS_PREFIX7=${LOCALBASE}/grass-7.4.3
GRASS_FORCE_MAKE_JOBS=	NO
GRASS_CMAKE_OFF=	-DWITH_GRASS7:BOOL=FALSE

POSTGIS_USES=		pgsql
POSTGIS_CMAKE_ON=	-DWITH_POSTGRESQL:BOOL=TRUE
POSTGIS_CMAKE_OFF=	-DWITH_POSTGRESQL:BOOL=FALSE

PYTHON_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cycler>=0.10.0:devel/py-cycler@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}dateutil>=2.7.3:devel/py-dateutil@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}future>=0.16.0:devel/py-future@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}httplib2>=0.11.3:www/py-httplib2@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}Jinja2>=2.10:devel/py-Jinja2@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}MarkupSafe>=1.0:textproc/py-MarkupSafe@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}matplotlib>=2.1.2:math/py-matplotlib@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}mock>=2.0.0:devel/py-mock@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}OWSLib>=0.17.0:graphics/py-OWSLib@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pbr>=3.1.1:devel/py-pbr@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pip>=9.0.3:devel/py-pip@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pygments>=2.2.0:textproc/py-pygments@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pyproj>=1.9.5.1:graphics/py-pyproj@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pytz>=2018.7:devel/py-pytz@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}requests>=2.18.4:www/py-requests@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}six>=1.11.0:devel/py-six@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}sqlite3>=2.7.15:databases/py-sqlite3@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}yaml>=3.13:devel/py-yaml@${PY_FLAVOR}

PYTHON_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cycler>=0.10.0:devel/py-cycler@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}dateutil>=2.7.3:devel/py-dateutil@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}future>=0.16.0:devel/py-future@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}gdal>=2.2.4:graphics/py-gdal@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}httplib2>=0.11.3:www/py-httplib2@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}Jinja2>=2.10:devel/py-Jinja2@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}MarkupSafe>=1.0:textproc/py-MarkupSafe@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}matplotlib>=2.1.2:math/py-matplotlib@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}mock>=2.0.0:devel/py-mock@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}numpy>=1.11.2:math/py-numpy@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}OWSLib>=0.17.0:graphics/py-OWSLib@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pbr>=3.1.1:devel/py-pbr@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pip>=9.0.3:devel/py-pip@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}psycopg2>=2.7.6.1:databases/py-psycopg2@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pygments>=2.2.0:textproc/py-pygments@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pyproj>=1.9.5.1:graphics/py-pyproj@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pytz>=2018.7:devel/py-pytz@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}requests>=2.18.4:www/py-requests@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}six>=1.11.0:devel/py-six@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}sqlite3>=2.7.15:databases/py-sqlite3@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}termcolor>=1.1.0:devel/py-termcolor@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}yaml>=3.13:devel/py-yaml@${PY_FLAVOR}
PYTHON_CMAKE_ON=	-DWITH_BINDINGS:BOOL=TRUE
PYTHON_CMAKE_OFF=	-DWITH_BINDINGS:BOOL=FALSE

SERVER_LIB_DEPENDS=	libfcgi.so:www/fcgi
SERVER_CMAKE_ON=	-DWITH_SERVER:BOOL=TRUE
SERVER_CMAKE_OFF=	-DWITH_SERVER:BOOL=FALSE

TESTS_CMAKE_ON=		-DENABLE_TESTS=TRUE
TESTS_CMAKE_OFF=	-DENABLE_TESTS=FALSE

post-patch:
	@${REINPLACE_CMD} -e 's|markupsafe ||g' \
		${WRKSRC}/python/ext-libs/CMakeLists.txt

pre-configure:
	${MKDIR} ${CONFIGURE_WRKSRC}/bin && ${LN} -s ${PYTHON_CMD} ${CONFIGURE_WRKSRC}/bin/python3

post-configure:
	@${REINPLACE_CMD} -e 's|/share/py-sip|/share/PyQt5/3.6/sip/|g' \
		${WRKSRC}/python/CMakeFiles/python_module_qgis__gui.dir/build.make \
		${WRKSRC}/python/CMakeFiles/generate_sip_qgis._analysis_cpp_files.dir/build.make \
		${WRKSRC}/python/CMakeFiles/python_module_qgis__analysis.dir/build.make \
		${WRKSRC}/python/CMakeFiles/generate_sip_qgis._gui_cpp_files.dir/build.make \
		${WRKSRC}/python/CMakeFiles/generate_sip_qgis._core_cpp_files.dir/build.make \
		${WRKSRC}/python/CMakeFiles/python_module_qgis__server.dir/build.make \
		${WRKSRC}/python/CMakeFiles/generate_sip_qgis._server_cpp_files.dir/build.make \
		${WRKSRC}/python/CMakeFiles/python_module_qgis__core.dir/build.make

post-install:
	@${RM} ${STAGEDIR}${DATADIR}/python/pytz/tzfile.py.bak

post-install-TESTS-on:
	@${RM} /tmp/srs.db

check:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} check

.include <bsd.port.mk>
