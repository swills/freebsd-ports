# Created by: ijliao
# $FreeBSD: head/textproc/silvercity/Makefile 415858 2016-05-25 19:30:59Z gerald $

PORTNAME=	silvercity
PORTVERSION=	0.9.7
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/Python%20SilverCity%20Bindings/${PORTVERSION}
DISTNAME=	SilverCity-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lexing package for over 20 programming and markup languages

USES=		dos2unix python
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	SilverCity

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/SilverCity/_SilverCity.so

.include <bsd.port.mk>
