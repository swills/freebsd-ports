# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-secs2d/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	octave-forge-secs2d
PORTVERSION=	0.0.8
PORTREVISION=	22
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -E 's/Octave_map/octave_map/g' ${WRKSRC}/src/*.cc

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
