# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: head/security/paperkey/Makefile 447034 2017-08-01 17:07:58Z zi $

PORTNAME=	paperkey
PORTVERSION=	1.4
CATEGORIES=	security
MASTER_SITES=	http://www.jabberwocky.com/software/paperkey/ \
		ZI

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Extract just the secret information out of OpenPGP secret keys

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/paperkey man/man1/paperkey.1.gz
PORTDOCS=	NEWS README

OPTIONS_DEFINE=	DOCS

# Setting ALL_TARGET to "all check" is racy and breaks parallel builds
post-build:
	${MAKE} -C ${BUILD_WRKSRC} check

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S@^@${WRKSRC}/@} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
