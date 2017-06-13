# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/devel/p5-DateTime-Format-SQLite/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DateTime-Format-SQLite
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format SQLite dates and times

BUILD_DEPENDS=	p5-DateTime-Format-Builder>=0:devel/p5-DateTime-Format-Builder
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
