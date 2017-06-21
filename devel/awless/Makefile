# Created by: Dmitri Goutnik <dg@syrec.org>
# $FreeBSD: head/devel/awless/Makefile 443994 2017-06-20 16:46:22Z joneum $

PORTNAME=	awless
PORTVERSION=	0.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	dg@syrec.org
COMMENT=	Fast, powerful and easy-to-use CLI for AWS

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	go:lang/go

USE_GITHUB=	yes
GH_ACCOUNT=	wallix
GH_SUBDIR=	src/github.com/wallix/${PORTNAME}

PLIST_FILES=	bin/awless
PORTDOCS=	README.md

do-build:
	@(cd ${WRKSRC} && ${SETENV} GOPATH=${WRKSRC} go build -o ${PORTNAME} )

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
