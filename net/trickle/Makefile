# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: head/net/trickle/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PORTNAME=	trickle
PORTVERSION=	1.07
PORTREVISION=	6
CATEGORIES=	net
MASTER_SITES=	http://monkey.org/~marius/trickle/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight, portable bandwidth shaper

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		libtool localbase
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libevent=${LOCALBASE} \
		--sysconfdir=${PREFIX}/etc
USE_LDCONFIG=	yes

MAKE_JOBS_UNSAFE=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/trickle/trickle-overload.so
	${INSTALL_DATA} ${FILESDIR}/trickled.conf ${STAGEDIR}${PREFIX}/etc/trickled.conf.sample

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
