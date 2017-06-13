# Created by: Josh Gilliam <josh@quick.net>
# $FreeBSD: head/mail/mbx2mbox/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	mbx2mbox
PORTVERSION=	0.34
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MS Outlook Express .mbx to mbox file converter

BUILD_DEPENDS=	p5-Date-Manip>=0:devel/p5-Date-Manip
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
