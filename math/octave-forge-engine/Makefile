# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-engine/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	octave-forge-engine
PORTVERSION=	1.0.9
PORTREVISION=	14
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	HOME=${WRKSRC}

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
