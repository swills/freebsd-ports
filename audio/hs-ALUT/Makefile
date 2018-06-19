# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/audio/hs-ALUT/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	ALUT
PORTVERSION=	2.4.0.2
PORTREVISION=	2
CATEGORIES=	audio haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding for the OpenAL Utility Toolkit

LICENSE=	BSD3CLAUSE

USE_CABAL=	OpenAL>=1.7 StateVar>=1.1
USES=		openal:al,alut

INSTALL_PORTEXAMPLES=	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
