# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: head/devel/p5-Module-Manifest/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Module-Manifest
PORTVERSION=	1.08
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Parse and examine a Perl distribution MANIFEST file

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Params-Util>=0:devel/p5-Params-Util \
		p5-Test-Warn>=0:devel/p5-Test-Warn
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
