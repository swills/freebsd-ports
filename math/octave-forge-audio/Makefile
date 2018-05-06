# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-audio/Makefile 468999 2018-05-03 23:42:35Z stephen $

PORTNAME=	octave-forge-audio
PORTVERSION=	1.1.4
PORTREVISION=	17
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN=		does not build with octave version >= 4.4.0
GNU_CONFIGURE=	yes

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
