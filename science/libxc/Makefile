# Created by: Johannes Dieterich <dieterich@ogolem.org>
# $FreeBSD: head/science/libxc/Makefile 482633 2018-10-20 23:29:28Z yuri $

PORTNAME=	libxc
DISTVERSION=	4.2.3
CATEGORIES=	science
MASTER_SITES=	http://www.tddft.org/programs/octopus/download/libxc/${DISTVERSION}/

MAINTAINER=	dieterich@ogolem.org
COMMENT=	Library of exchange-correlation functionals for DFT

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		fortran gmake libtool perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared --disable-static
USE_LDCONFIG=	yes

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
