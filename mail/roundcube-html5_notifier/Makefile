# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/mail/roundcube-html5_notifier/Makefile 465067 2018-03-20 06:16:18Z meta $

PORTNAME=	html5_notifier
PORTVERSION=	0.6.2
DISTVERSIONPREFIX=	v
CATEGORIES=	mail
PKGNAMEPREFIX=	roundcube-

MAINTAINER=	meta@FreeBSD.org
COMMENT=	HTML5 desktop notifier plugin for roundcube

LICENSE=	GPLv3

RUN_DEPENDS=	roundcube>=1.0:mail/roundcube
BUILD_DEPENDS=	roundcube>=1.0:mail/roundcube

USE_GITHUB=	yes
GH_ACCOUNT=	stremlau

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR=		${PREFIX}/www/roundcube/plugins/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${PAX} -r -w . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
