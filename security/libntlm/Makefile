# Created by: ijliao
# $FreeBSD: head/security/libntlm/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	libntlm
PORTVERSION=	1.4
CATEGORIES=	security
MASTER_SITES=	http://www.nongnu.org/libntlm/releases/

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Library that implement Microsoft's NTLM authentication

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pathfix pkgconfig libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

PORTDOCS=	AUTHORS ChangeLog NEWS README THANKS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
