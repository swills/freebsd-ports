# $FreeBSD$

PORTNAME=	liteide
DISTVERSIONPREFIX=	x
DISTVERSION=	35.3
CATEGORIES=	devel editors

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Simple, open source, cross-platform Go IDE

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE.LGPL

BUILD_DEPENDS=	go:lang/go
RUN_DEPENDS=	go:lang/go \
		gocode:devel/go-gocode

USES=		gl qmake
USE_GL=		gl
USE_LDCONFIG=	${PREFIX}/lib/${PORTNAME}

USE_GITHUB=	yes
GH_ACCOUNT=	visualfc
GH_TUPLE=	visualfc:gotools:77fd0f0:gotools/src/github.com/visualfc/gotools

USES+=		qt:5
USE_QT=		buildtools_build core gui network printsupport widgets xml

WRKSRC_SUBDIR=	liteidex

PORTDOCS=	README.md

OPTIONS_DEFINE=	DEBUG DOCS
OPTIONS_SUB=	yes

DEBUG_CONFIGURE_ENABLE=	debug

ICON_SIZES=	16 24 32 48 64 128

post-build:
	cd ${WRKSRC}/${GH_SUBDIR_gotools} && \
		${SETENV} ${MAKE_ENV} GOPATH=${WRKSRC} go build

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${GH_SUBDIR_gotools}/gotools ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/liteide.desktop ${STAGEDIR}${PREFIX}/share/applications
	(cd ${WRKSRC}/deploy && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})
	(cd ${WRKSRC}/os_deploy/freebsd && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})
	${RM} ${STAGEDIR}${PREFIX}/lib/liteide/*.a
.for sz in ${ICON_SIZES}
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${sz}x${sz}/apps
	${INSTALL_DATA} ${WRKSRC}/src/liteapp/images/liteide${sz}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${sz}x${sz}/apps/liteide.png
.endfor

post-install-DOCS-on:
	(cd ${WRKSRC:H} && ${COPYTREE_SHARE} "${PORTDOCS}" ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
