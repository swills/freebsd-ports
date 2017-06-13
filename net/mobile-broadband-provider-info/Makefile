# $FreeBSD: head/net/mobile-broadband-provider-info/Makefile 436061 2017-03-13 10:36:33Z garga $

PORTNAME=	mobile-broadband-provider-info
PORTVERSION=	20170310
CATEGORIES=	net gnome
MASTER_SITES=	GNOME

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Service mobile broadband provider database

LICENSE=	PD

USES=		autoreconf pathfix tar:xz
GNU_CONFIGURE=	yes

PLIST_FILES=	${DATADIR}/serviceproviders.2.dtd \
		${DATADIR}/serviceproviders.xml \
		libdata/pkgconfig/${PORTNAME}.pc

.include <bsd.port.mk>
