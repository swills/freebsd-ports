# Created by: Christopher Nehren <apeiron@comcast.net>
# $FreeBSD: head/devel/p5-Shell-Base/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Shell-Base
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl module implementing a simple command shell

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Term-Size>=0:devel/p5-Term-Size \
		p5-Text-Shellwords>=0:textproc/p5-Text-Shellwords
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
