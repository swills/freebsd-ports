# $FreeBSD: head/devel/hs-ShellCheck/Makefile 457445 2017-12-28 10:59:46Z pizzamig $

PORTNAME=	ShellCheck
PORTVERSION=	0.4.7
CATEGORIES=	devel haskell

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Shell script analysis tool

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_CABAL=	json mtl>=2.2.1 parsec QuickCheck>=2.7.4 regex-tdfa

EXECUTABLE=	shellcheck

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
