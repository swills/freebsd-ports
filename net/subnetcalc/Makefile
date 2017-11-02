# Created by: Thomas Dreibholz <dreibh@iem.uni-due.de>
# $FreeBSD: head/net/subnetcalc/Makefile 453247 2017-10-31 18:47:52Z tcberner $

PORTNAME=	subnetcalc
DISTVERSION=	2.4.8
CATEGORIES=	net
MASTER_SITES=	https://www.uni-due.de/~be0001/subnetcalc/download/

MAINTAINER=	dreibh@iem.uni-due.de
COMMENT=	IPv4/IPv6 Subnet Calculator

LICENSE=	GPLv3

LIB_DEPENDS=	libGeoIP.so:net/GeoIP

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	"--with-geoip=${LOCALBASE}"
USES=	gmake

PLIST_FILES=	bin/subnetcalc \
		man/man1/subnetcalc.1.gz

.include <bsd.port.mk>
