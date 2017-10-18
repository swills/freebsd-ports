# $FreeBSD: head/x11-toolkits/qwt6/Makefile 451456 2017-10-07 12:14:30Z vanilla $

PORTNAME=	qwt
PORTVERSION=	6.1.3
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF
PKGNAMESUFFIX=	6

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Qt Widgets for Technical Applications

USES=		gmake qmake tar:bzip2
USE_QT4=	corelib gui opengl svg xml moc_build
USE_GL=		gl
USE_LDCONFIG=	yes
DOCSDIR=	${PREFIX}/share/doc/qwt6

PORTDOCS=	*
PLIST_SUB=	INCLUDEDIR=include/qwt6 \
		SHLIB_VER=${PORTVERSION} \
		SHLIB_SHVER=${PORTVERSION:R} \
		QT_MKSPECDIR=share/qt4/mkspecs

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e '/INSTALLS.*doc/d' ${WRKSRC}/doc/doc.pro

post-install-DOCS-on:
	@(cd ${WRKSRC}/doc/html/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
