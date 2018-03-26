# Created by: Jan Srocker <Jan.Stocker@t-online.de>
# $FreeBSD: head/math/gdcalc/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gdcalc
PORTVERSION=	2.15
PORTREVISION=	8
CATEGORIES=	math
MASTER_SITES=	http://bhepple.freeshell.org/dcalc/unix/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Gnome-based scientific calculator

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${LOCALBASE}/bin/gunits:math/units

USES=		pkgconfig
USE_GNOME=	libgnomeui
GNU_CONFIGURE=	yes

LDFLAGS+=	-lm

.include <bsd.port.mk>
