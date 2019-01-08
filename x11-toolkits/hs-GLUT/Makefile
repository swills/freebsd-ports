# Created by: Volker Stolz <vs@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/hs-GLUT/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	GLUT
PORTVERSION=	2.7.0.14
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding for the OpenGL Utility Toolkit

LICENSE=	BSD3CLAUSE

USE_CABAL=	OpenGL>=2.12 OpenGLRaw>=2.3 StateVar>=1.1
USE_GL=		glut

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
