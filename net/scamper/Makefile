# $FreeBSD: head/net/scamper/Makefile 463948 2018-03-09 09:23:18Z yuri $

PORTNAME=	scamper
DISTVERSION=	20180309
CATEGORIES=	net ipv6
MASTER_SITES=	http://www.caida.org/tools/measurement/scamper/code/
DISTNAME=	${PORTNAME}-cvs-${PORTVERSION}

MAINTAINER=	mjl@luckie.org.nz
COMMENT=	Tool for parallelised IPv4 and IPv6 measurement

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake libtool ssl
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
