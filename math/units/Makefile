# Created by: Jason Harris <jharris@widomaker.com>
# $FreeBSD: head/math/units/Makefile 472564 2018-06-16 19:04:49Z krion $

PORTNAME=	units
PORTVERSION=	2.16
CATEGORIES=	math
MASTER_SITES=	GNU

MAINTAINER=	jharris@widomaker.com
COMMENT=	Unit conversion and calculation

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g

INFO=		units

post-patch:
	@${REINPLACE_CMD} -e \
	 's|$$(INSTALL_PROGRAM) units_cur|${INSTALL_SCRIPT} units_cur|' \
	${WRKSRC}/Makefile.in

.include <bsd.port.mk>
