# $FreeBSD: head/accessibility/kdeaccessibility/Makefile 468533 2018-04-28 10:22:20Z tcberner $

PORTNAME=	kdeaccessibility
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	accessibility kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Accessibility applications for KDE 5

USES=		kde:5 metaport

OPTIONS_DEFINE=	KMAG KMOUSETOOL KMOUTH
OPTIONS_DEFAULT:=	${OPTIONS_DEFINE}

KMAG_DESC=		Install Screen magnifier
KMAG_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmag:accessibility/kmag

KMOUSETOOL_DESC=	Install Automatic mouse click tool
KMOUSETOOL_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmousetool:accessibility/kmousetool

KMOUTH_DESC=		Install Speech synthesizer frontend
KMOUTH_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmouth:accessibility/kmouth

.include <bsd.port.mk>
