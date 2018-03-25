# Created by: ofsen@enderunix.org
# $FreeBSD: head/mail/isoqlog/Makefile 464820 2018-03-17 14:13:17Z dbaio $

PORTNAME=	isoqlog
PORTVERSION=	2.2.1
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://www.enderunix.org/isoqlog/

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Qmail, postfix, sendmail, exim MTA log analysis program

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake
GNU_CONFIGURE=	yes

SUB_FILES=	pkg-message

PORTDOCS=	*
OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
