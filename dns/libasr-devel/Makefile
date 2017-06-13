# Created by: Ashish SHUKLA <ashish@FreeBSD.org>
# $FreeBSD: head/dns/libasr-devel/Makefile 441907 2017-05-28 10:58:00Z antoine $

PORTNAME=	libasr
PORTVERSION=	201602131606
CATEGORIES=	dns
MASTER_SITES=	http://www.opensmtpd.org/archives/ \
		http://distfiles.pirateparty.in/ashish/
PKGNAMESUFFIX=	-devel

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Asynchronous DNS resolver library (development snapshot)

LICENSE=	ISCL BSD4CLAUSE BSD3CLAUSE BSD2CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENCE

CONFLICTS=	libasr-[0-9]*
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

USES=		groff libtool
USE_LDCONFIG=	yes

.include <bsd.port.mk>
