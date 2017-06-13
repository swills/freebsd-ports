# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/devel/p5-Hash-Slice/Makefile 421693 2016-09-10 14:14:08Z ehaupt $

PORTNAME=	Hash-Slice
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Make a hash from a deep slice of another hash

BUILD_DEPENDS=	p5-Carp-Clan>=0:devel/p5-Carp-Clan \
		p5-Clone>=0.09:devel/p5-Clone
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Most>=0:devel/p5-Test-Most

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
