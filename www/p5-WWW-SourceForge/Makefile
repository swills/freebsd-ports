# Created by: Yuan-Chung Hsiao <ychsiao@ychsiao.idv.tw>
# $FreeBSD: head/www/p5-WWW-SourceForge/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	WWW-SourceForge
PORTVERSION=	0.70
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RBOW
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	Retrieve information from SourceForge site

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-WWW-Mechanize>=0:www/p5-WWW-Mechanize \
		p5-HTML-TableExtract>=0:www/p5-HTML-TableExtract \
		p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
