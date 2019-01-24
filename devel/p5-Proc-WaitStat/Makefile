# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: head/devel/p5-Proc-WaitStat/Makefile 490812 2019-01-20 20:50:15Z sunpoet $

PORTNAME=	Proc-WaitStat
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interpret and act on wait() status values

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IPC-Signal>=0:devel/p5-IPC-Signal

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
