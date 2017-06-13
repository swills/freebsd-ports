# Created by: Ashish SHUKLA <ashish@FreeBSD.org>
# $FreeBSD: head/dns/libasr/Makefile 441907 2017-05-28 10:58:00Z antoine $

PORTNAME=	libasr
PORTVERSION=	1.0.2
CATEGORIES=	dns
MASTER_SITES=	http://www.opensmtpd.org/archives/ \
		http://distfiles.pirateparty.in/ashish/

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Asynchronous DNS resolver library

LICENSE=	ISCL BSD4CLAUSE BSD3CLAUSE BSD2CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENCE

CONFLICTS=	libasr-devel-[0-9]*
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

USES=		groff libtool ssl:build
USE_LDCONFIG=	yes

CFLAGS+=	-I${OPENSSLINC}

.include <bsd.port.mk>
