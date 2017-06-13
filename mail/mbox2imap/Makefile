# Created by: gahr
# $FreeBSD: head/mail/mbox2imap/Makefile 411116 2016-03-14 21:24:46Z feld $

PORTNAME=	mbox2imap
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://BSDforge.com/projects/source/mail/mbox2imap/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Upload email stored in mbox file format to an IMAP server

#LICENSE=	(if author can still be reached, ask; else BSD2CLAUSE)

USES=		python tar:xz
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
