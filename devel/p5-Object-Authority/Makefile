# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Object-Authority/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Object-AUTHORITY
PORTVERSION=	0.004
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that adds an AUTHORITY method to your class

BUILD_DEPENDS=	p5-Object-Role>=0:devel/p5-Object-Role
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
