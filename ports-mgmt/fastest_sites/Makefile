# $FreeBSD: head/ports-mgmt/fastest_sites/Makefile 464165 2018-03-11 11:21:23Z rene $

PORTNAME=	fastest_sites
PORTVERSION=	20110317
PORTREVISION=	2
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://www.semicomplete.com/files/fastest_sites/
EXTRACT_SUFX=	.py

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sort MASTER_SITE_* based upon TCP handshake times

USES=		python shebangfix
NO_BUILD=	yes

PLIST_FILES=	bin/fastest_sites
SHEBANG_FILES=	fastest_sites-${PORTVERSION}.py
python_OLD_CMD=	/usr/local/bin/python

do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} ${DISTDIR}/${DISTNAME}.py ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/fastest_sites-${PORTVERSION}.py \
		${STAGEDIR}${PREFIX}/bin/fastest_sites

.include <bsd.port.mk>
