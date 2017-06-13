# Created by: gahr
# $FreeBSD: head/mail/ez-pine-gpg/Makefile 418767 2016-07-19 11:04:13Z mat $

PORTNAME=	ez-pine-gpg
DISTVERSION=	0.4h
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://business-php.com/opensource/ez-pine-gpg/
DISTNAME=	${PORTNAME}_v${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Set of scripts to use gpg with Pine

LICENSE=	GPLv2+

RUN_DEPENDS=	gpg:security/gnupg

USES=		tar:tgz
WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS

do-install:
	(cd ${WRKSRC} && ${SETENV} DESTDIR="${STAGEDIR}" ./install ${PREFIX}/bin)

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
