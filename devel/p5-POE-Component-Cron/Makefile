# Created by: mat
# $FreeBSD: head/devel/p5-POE-Component-Cron/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	POE-Component-Cron
PORTVERSION=	0.021
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Schedule POE Events using a cron spec

BUILD_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-POE-Component-Schedule>=0:devel/p5-POE-Component-Schedule \
		p5-DateTime-Event-Random>=0:devel/p5-DateTime-Event-Random \
		p5-DateTime-Event-Cron>=0:devel/p5-DateTime-Event-Cron
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-POE-Component-Schedule>=0:devel/p5-POE-Component-Schedule \
		p5-DateTime-Event-Random>=0:devel/p5-DateTime-Event-Random \
		p5-DateTime-Event-Cron>=0:devel/p5-DateTime-Event-Cron

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
