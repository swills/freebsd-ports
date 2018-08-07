# Created by: Bas Kruit <baskruit@bsltwr.dhis.org>
# $FreeBSD$

PORTNAME=	dhisd
PORTVERSION=	5.5
CATEGORIES=	dns
MASTER_SITES=	ftp://ftp.dhis.org/pub/dhis/

MAINTAINER=	ndowens@yahoo.com
COMMENT=	DHIS server for dynamic updates on the server using specific engines

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libgmp.so:math/gmp

USES=		localbase:ldflags

SUB_FILES=	pkg-message

PORTDOCS=	CONTRIBUTORS INSTALL README

OPTIONS_DEFINE=	DOCS

post-patch:
	@${CP} ${FILESDIR}/dhisd.sh ${WRKSRC}/dhisd.sh
	@cd ${WRKSRC} && ${REINPLACE_CMD} -e "s^__PREFIX__^${PREFIX}^g" \
		Makefile dhisd.h dhisd.sh ${DOCS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dhisd ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/dhisgenkeys ${STAGEDIR}${PREFIX}/sbin
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/dhis
	${INSTALL_DATA} ${WRKSRC}/dhis.db.sample ${STAGEDIR}${PREFIX}/etc/dhis/dhis.db.sample
	${INSTALL_DATA} ${WRKSRC}/dhisd.conf.sample ${STAGEDIR}${PREFIX}/etc/dhis/dhis.conf.sample
	${INSTALL_SCRIPT} ${WRKSRC}/dhisd.sh ${STAGEDIR}${PREFIX}/etc/rc.d/dhisd.sh

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

post-install-DOCS-on:
	@${REINPLACE_CMD} -e 's|^__DOCS__||' ${PKGMESSAGE}

post-install-DOCS-off:
	@${REINPLACE_CMD} -e '/^__DOCS__/ d' ${PKGMESSAGE}

.include <bsd.port.mk>
