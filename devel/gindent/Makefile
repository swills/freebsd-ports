# Created by: Kapil Chowksey <kchowksey@hss.hns.com>
# $FreeBSD: head/devel/gindent/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	gindent
PORTVERSION=	2.2.10
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	GNU/indent
DISTNAME=	indent-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	GNU indent

OPTIONS_DEFINE=	DOCS NLS

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -DBERKELEY_DEFAULTS=1
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--program-prefix=g
MAKE_JOBS_UNSAFE=	yes

NLS_USES=	gettext
OPTIONS_SUB=	yes
NLS_CONFIGURE_OFF=	--disable-nls

INFO=		indent

post-patch:
	@${GREP} -lR "malloc\.h" ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e \
		's|malloc\.h|stdlib.h|g'

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/indent.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
