# Created by: gahr
# $FreeBSD: head/devel/catch/Makefile 467032 2018-04-11 07:40:47Z mat $

PORTNAME=	catch
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.2
CATEGORIES=	devel

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Header-only test framework for C++

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		compiler:c++14-lang cmake pathfix
USE_GITHUB=	yes
GH_ACCOUNT=	catchorg
GH_PROJECT=	Catch2

CMAKE_ARGS=	-DCMAKE_INSTALL_DOCDIR=${DOCSDIR}
PORTDOCS=	*

do-test:
	${WRKSRC}/SelfTest

.include <bsd.port.mk>
