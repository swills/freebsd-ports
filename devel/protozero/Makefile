# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/protozero/Makefile 467151 2018-04-12 12:39:41Z amdmi3 $

PORTNAME=	protozero
PORTVERSION=	1.6.2
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Minimalist protocol buffer decoder and encoder in C++

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USE_GITHUB=	yes
GH_ACCOUNT=	mapbox

USES=		cmake
TEST_TARGET=	test
NO_ARCH=	yes  # header only library

PORTDOCS=	CHANGELOG.md README.md UPGRADING.md

OPTIONS_DEFINE=		DOCS TEST
OPTIONS_DEFAULT=	TEST  # no additional runtime reps
TEST_DESC=		Enable additional tests, requires protobuf at build time
TEST_BUILD_DEPENDS=	protoc:devel/protobuf

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
