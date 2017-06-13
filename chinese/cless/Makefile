# Created by: David O'Brien (obrien@cs.ucdavis.edu)
# $FreeBSD: head/chinese/cless/Makefile 408208 2016-02-05 15:30:38Z marino $

PORTNAME=	cless
PORTVERSION=	290
CATEGORIES=	chinese
MASTER_SITES=	ftp://ftp.cuhk.hk/pub/chinese/ifcss/software/unix/c-utils/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Better pager utility (and it speaks Chinese)

LICENSE=	BSD2CLAUSE

USES=		ncurses
GNU_CONFIGURE=	yes
CFLAGS+=	-DHANZI # LDFLAGS=-s datadir=/usr/local/lib/less
CPP=		#

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|-ltermcap|-lncurses|' ${WRKSRC}/configure

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.CLESS ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
