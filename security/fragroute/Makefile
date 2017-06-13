# Created by: Dominic Marks <dominic.marks@btinternet.com>
# $FreeBSD: head/security/fragroute/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PORTNAME=	fragroute
PORTVERSION=	1.2
PORTREVISION=	14
CATEGORIES=	security net
MASTER_SITES=	http://monkey.org/~dugsong/fragroute/ \
		PACKETSTORM/UNIX/security

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for intercepting, modifying, and rewriting egress traffic

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libdnet.so:net/libdnet \
		libevent.so:devel/libevent

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-libdnet=${LOCALBASE} \
			--with-libevent=${LOCALBASE} --with-pcap

SCRIPTS=	README.snort base-1 frag-1 frag-2 frag-3 frag-4 frag-5 \
	frag-6 frag-7-unix frag-7-win32 ins-2 ins-3 tcbc-2 tcp-3 tcp-5 \
	tcp-7 tcp-9

pre-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
.for FILE in ${SCRIPTS}
	${INSTALL_DATA} ${WRKSRC}/scripts/${FILE} ${STAGEDIR}${DATADIR}
.endfor

.include <bsd.port.mk>
