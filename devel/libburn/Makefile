# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: head/devel/libburn/Makefile 480071 2018-09-18 19:54:23Z swills $

PORTNAME=	libburn
PORTVERSION=	1.5.0
CATEGORIES=	devel
MASTER_SITES=	http://files.libburnia-project.org/releases/

MAINTAINER=	ndowens@yahoo.com
COMMENT=	Libburnia library to read/write optical discs

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

PORTDOCS=	*.txt

OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/doc/|} \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
