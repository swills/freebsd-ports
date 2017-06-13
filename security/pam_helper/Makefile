# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/security/pam_helper/Makefile 422402 2016-09-18 18:18:35Z marcus $

PORTNAME=	pam_helper
PORTVERSION=	1.1
CATEGORIES=	security sysutils
MASTER_SITES=	http://www.marcuscom.com/pam_helper/

MAINTAINER=	marcus@FreeBSD.org
COMMENT=	Authenticate applications requiring PAM services

LICENSE=	BSD2CLAUSE

USES=		tar:bzip2 uidfix

PLIST_FILES=	bin/pam_helper

post-patch:
	@${REINPLACE_CMD} '/BINOWN=/d ; s,$${MINUSLPAM},-lpam,' ${WRKSRC}/Makefile

.include <bsd.port.mk>
