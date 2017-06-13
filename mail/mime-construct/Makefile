# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: head/mail/mime-construct/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	mime-construct
PORTVERSION=	1.11
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://www.argon.org/~roderick/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Construct and optionally send MIME messages from command line

BUILD_DEPENDS=	p5-MIME-Types>=0:mail/p5-MIME-Types \
		p5-Proc-WaitStat>=0:devel/p5-Proc-WaitStat
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
