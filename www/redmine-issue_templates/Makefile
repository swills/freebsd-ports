# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/redmine-issue_templates/Makefile 415155 2016-05-13 21:09:42Z feld $

PORTNAME=	issue_templates
PORTVERSION=	0.1.1
CATEGORIES=	www
MASTER_SITES=	https://bitbucket.org/akiko_pusu/redmine_issue_templates/downloads/
PKGNAMEPREFIX=	redmine-
DISTNAME=	redmine_${PORTNAME}-${PORTVERSION}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Redmine project issue templates plugin

LICENSE=	GPLv2+

USES=	zip

WRKSRC=	${WRKDIR}/akiko_pusu-redmine_issue_templates-001152051af5

NO_ARCH=	yes

REDMINE_PLUGIN_NAME=	redmine_${PORTNAME}

.include "${.CURDIR}/../../www/redmine/bsd.redmine.mk"
