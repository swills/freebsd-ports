# Created by: Yamashiro Jun <yamajun@ofug.net>
# $FreeBSD: head/textproc/uim-qt4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PKGNAMESUFFIX=	-qt4

COMMENT=	Qt4 modules of uim input method

LIB_DEPENDS=	libuim.so:textproc/uim

USE_QT=		qmake_build moc_build qt3support uic
USES=		iconv libtool qt:4

MASTERDIR=	${.CURDIR}/../../textproc/uim
PKGDIR=		${.CURDIR}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-qt4 --with-qt4-immodule
CONFIGURE_ENV=	DATADIRNAME="share"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include
UIM_SLAVE=	yes

.if defined(WITHOUT_X11)
IGNORE=		cannot be built without X11. Please, unset WITHOUT_X11
.endif

do-build:
	(cd ${WRKSRC}/uim && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} libuim-x-util.la libuim-counted-init.la)
	(cd ${WRKSRC}/replace && ${SETENV} ${MAKE_ENV} ${MAKE_CMD})
	(cd ${WRKSRC}/qt4 && ${SETENV} ${MAKE_ENV} ${MAKE_CMD})

do-install:
	(cd ${WRKSRC}/qt4 && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} DESTDIR=${STAGEDIR} install)

.include "${MASTERDIR}/Makefile"
