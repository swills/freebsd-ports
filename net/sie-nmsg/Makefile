# $FreeBSD: head/net/sie-nmsg/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	sie-nmsg
PORTVERSION=	1.2.0
CATEGORIES=	net dns
MASTER_SITES=	FARSIGHT LOCAL/truckman/farsight

MAINTAINER=	truckman@FreeBSD.org
COMMENT=	SIE message module plugin for libnmsg

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libprotobuf-c.so:devel/protobuf-c \
		libnmsg.so:net/nmsg \
		libwdns.so:dns/wdns

GNU_CONFIGURE=	yes
USES=	gmake libtool pathfix pkgconfig

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
