# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/sysutils/fusefs-chironfs/Makefile 434248 2017-02-16 19:46:23Z lifanov $

PORTNAME=	chironfs
PORTVERSION=	1.1.1
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://BSDforge.com/projects/source/sysutils/chironfs/
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	FUSE based filesystem with replication at the filesystem level

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USES=		fuse

PLIST_FILES=	bin/chironfs bin/chirctl man/man8/chironfs.8.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's,-liconv,${ICONV_LIB},' ${WRKSRC}/src/Makefile.*

post-patch-DOCS-off:
	@${REINPLACE_CMD} -e 's, doc , ,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
