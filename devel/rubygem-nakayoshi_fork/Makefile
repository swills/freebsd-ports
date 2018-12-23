# Created by: Matthias Fechner <mfechner@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-nakayoshi_fork/Makefile 488207 2018-12-23 12:39:43Z mfechner $

PORTNAME=	nakayoshi_fork
PORTVERSION=	0.0.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Solves CoW friendly problem on MRI 2.2 and later

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

post-patch:
	@${CHMOD} -R o-w ${WRKSRC}/*

.include <bsd.port.mk>
