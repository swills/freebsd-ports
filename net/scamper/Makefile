# $FreeBSD: head/net/scamper/Makefile 444525 2017-06-27 23:41:49Z dbaio $

PORTNAME=	scamper
PORTVERSION=	20161204a
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
